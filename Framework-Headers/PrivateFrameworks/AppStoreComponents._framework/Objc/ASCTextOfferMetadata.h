//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/ASCOfferMetadata.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCTextOfferMetadata : ASCOfferMetadata
{
    NSString *_title;
    NSString *_subtitle;
}

@property (readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isText;

@end

