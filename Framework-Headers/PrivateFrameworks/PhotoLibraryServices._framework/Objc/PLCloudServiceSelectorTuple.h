//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLCloudService;

@interface PLCloudServiceSelectorTuple : NSObject
{
    SEL selector;
    PLCloudService *instance;
}

@property (strong, nonatomic) PLCloudService *instance; // @synthesize instance;
@property (nonatomic) SEL selector; // @synthesize selector;

- (void)dealloc;

@end
