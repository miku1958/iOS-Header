//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFPunchout : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSArray *urls; // @synthesize urls=_urls;

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)canOpenURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)preferredOpenableURL;

@end
