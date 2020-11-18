//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface WBSPerSitePreferenceValue : NSObject
{
    NSString *_localizedString;
    id<NSObject> _tag;
}

@property (readonly, nonatomic) NSString *localizedString; // @synthesize localizedString=_localizedString;
@property (readonly, nonatomic) id<NSObject> tag; // @synthesize tag=_tag;

+ (id)binaryOffValue;
+ (id)binaryOnValue;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTag:(id)arg1 localizedString:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
