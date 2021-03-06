//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString, NSURL;

@interface OKProducerBundle : NSObject
{
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
    unsigned long long _type;
    NSString *_bundleExtension;
}

@property (strong, nonatomic) NSString *bundleExtension; // @synthesize bundleExtension=_bundleExtension;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)bundle;
- (void)dealloc;
- (id)identifier;
- (id)infoDictionary;
- (id)init;
- (id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)url;
- (double)version;

@end

