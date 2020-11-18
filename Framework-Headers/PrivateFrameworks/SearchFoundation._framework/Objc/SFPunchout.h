//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPunchout-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    SFUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

@property (copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property (strong, nonatomic) SFUserActivityData *userActivityData; // @synthesize userActivityData=_userActivityData;

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)canOpenURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)preferredOpenableURL;

@end

