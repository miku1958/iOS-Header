//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MNLocationHistoryProvider;

__attribute__((visibility("hidden")))
@interface MNLocationHistory : NSObject
{
    id<MNLocationHistoryProvider> _locationHistoryProvider;
}

@property (readonly) NSArray *locationHistory;
@property (strong, nonatomic) id<MNLocationHistoryProvider> locationHistoryProvider; // @synthesize locationHistoryProvider=_locationHistoryProvider;

- (void).cxx_destruct;
- (id)init;

@end

