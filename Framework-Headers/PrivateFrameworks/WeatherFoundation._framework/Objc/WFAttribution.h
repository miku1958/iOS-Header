//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WFAttribution : NSObject
{
}

@property (readonly) NSString *localizedSourceAttribution;
@property (readonly) NSURL *sourceAttributionURL;
@property (readonly) NSString *sourceName;

+ (id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1;
+ (id)sharedAttribution;
+ (id)weatherSourceAttributionURLForTrafficParameter:(id)arg1;
- (id)sourceAttributionImageForStyle:(unsigned long long)arg1;

@end

