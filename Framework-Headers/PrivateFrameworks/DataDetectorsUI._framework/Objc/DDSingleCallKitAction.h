//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDCallKitAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface DDSingleCallKitAction : DDCallKitAction
{
    NSArray *_callProviders;
}

+ (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)callProvider;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)localizedName;

@end
