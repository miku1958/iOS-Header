//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject
{
}

@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) BOOL busy;
@property (nonatomic) long long checked;
@property (copy, nonatomic) NSArray *childNodeIds;
@property (copy, nonatomic) NSArray *controlledNodeIds;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL expanded;
@property (copy, nonatomic) NSArray *flowedNodeIds;
@property (nonatomic) BOOL focused;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL ignored;
@property (nonatomic) BOOL ignoredByDefault;
@property (nonatomic) long long invalid;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL liveRegionAtomic;
@property (copy, nonatomic) NSArray *liveRegionRelevant;
@property (nonatomic) long long liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) BOOL pressed;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL required;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSArray *selectedChildNodeIds;

- (id)initWithExists:(BOOL)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4;

@end

