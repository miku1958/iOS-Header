//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKGroupUpdate : NSObject
{
    unsigned long long _groupUpdateType;
    NSString *_handleID;
}

@property (nonatomic) unsigned long long groupUpdateType; // @synthesize groupUpdateType=_groupUpdateType;
@property (strong, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 handleID:(id)arg2;

@end

