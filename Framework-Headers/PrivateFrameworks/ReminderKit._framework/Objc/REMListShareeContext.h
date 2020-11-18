//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMList, REMSharee;

@interface REMListShareeContext : NSObject
{
    REMSharee *_sharedOwner;
    REMList *_list;
}

@property (strong, nonatomic) REMList *list; // @synthesize list=_list;
@property (readonly, nonatomic) REMSharee *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property (readonly, nonatomic) NSArray *sharees;

- (void).cxx_destruct;
- (id)initWithList:(id)arg1;
- (id)shareesExcludingOwner;

@end
