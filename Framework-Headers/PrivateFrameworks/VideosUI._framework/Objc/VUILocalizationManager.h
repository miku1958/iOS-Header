//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VUILocalizationManager : NSObject
{
    NSDictionary *_overideLocDict;
}

@property (strong) NSDictionary *overideLocDict; // @synthesize overideLocDict=_overideLocDict;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withCount:(id)arg2;
- (void)updateWithJSDictionary:(id)arg1;

@end

