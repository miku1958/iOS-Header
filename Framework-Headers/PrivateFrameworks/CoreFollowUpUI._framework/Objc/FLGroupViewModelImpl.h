//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUpUI/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;
    NSString *_identifier;
    NSString *_rowTitle;
    NSString *_groupTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)items;
- (BOOL)restrictionEnabled;
- (BOOL)shouldCoalesceItems;

@end

