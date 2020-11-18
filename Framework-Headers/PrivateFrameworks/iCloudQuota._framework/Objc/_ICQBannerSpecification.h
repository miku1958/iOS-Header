//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _ICQBannerSpecification : NSObject
{
    NSDictionary *_serverDict;
    BOOL _hasDismissButtonDefault;
    NSString *_title;
    NSString *_messageFormat;
    NSArray *_messageLinks;
}

@property (nonatomic) BOOL hasDismissButtonDefault; // @synthesize hasDismissButtonDefault=_hasDismissButtonDefault;
@property (strong, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
@property (strong, nonatomic) NSArray *messageLinks; // @synthesize messageLinks=_messageLinks;
@property (strong, nonatomic) NSDictionary *serverDict;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (void)setMessageWithServerMessage:(id)arg1;

@end

