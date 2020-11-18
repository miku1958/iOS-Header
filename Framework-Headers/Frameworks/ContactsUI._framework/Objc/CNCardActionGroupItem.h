//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNCardGroupItem.h>

@class NSArray, NSMutableArray;

@interface CNCardActionGroupItem : CNCardGroupItem
{
    NSMutableArray *_actions;
}

@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;

+ (id)actionGroupItemWithAction:(id)arg1;
+ (id)actionGroupItemWithActions:(id)arg1;
- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (Class)cellClass;
- (id)init;
- (id)initWithAction:(id)arg1;

@end
