//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _ICSearchContext : NSObject
{
    NSString *_locale;
    NSArray *_recipients;
    NSString *_applicationBundleIdentifier;
}

@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3;

@end

