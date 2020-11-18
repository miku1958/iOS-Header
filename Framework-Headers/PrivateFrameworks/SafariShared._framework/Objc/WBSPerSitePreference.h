//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSString;

@interface WBSPerSitePreference : NSObject <NSCopying>
{
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

