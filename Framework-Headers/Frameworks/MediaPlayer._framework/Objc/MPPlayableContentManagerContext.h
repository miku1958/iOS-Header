//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPPlayableContentManagerContext : NSObject
{
    BOOL _contentLimitsEnforced;
    BOOL _endpointAvailable;
    long long _enforcedContentItemsCount;
    long long _enforcedContentTreeDepth;
}

@property (readonly, nonatomic) BOOL contentLimitsEnabled;
@property (nonatomic) BOOL contentLimitsEnforced; // @synthesize contentLimitsEnforced=_contentLimitsEnforced;
@property (nonatomic) BOOL endpointAvailable; // @synthesize endpointAvailable=_endpointAvailable;
@property (nonatomic) long long enforcedContentItemsCount; // @synthesize enforcedContentItemsCount=_enforcedContentItemsCount;
@property (nonatomic) long long enforcedContentTreeDepth; // @synthesize enforcedContentTreeDepth=_enforcedContentTreeDepth;


@end

