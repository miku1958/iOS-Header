//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/NSCopying-Protocol.h>

@protocol _CNUILikenessFingerprintImpl;

@interface CNUILikenessFingerprint : NSObject <NSCopying>
{
    id<_CNUILikenessFingerprintImpl> _impl;
}

+ (id)fingerprintForContact:(id)arg1;
+ (id)fingerprintForContactIdentifier:(id)arg1;
+ (id)fingerprintForContacts:(id)arg1 scope:(id)arg2;
+ (id)fingerprintForData:(id)arg1;
+ (id)fingerprintForScope:(id)arg1;
+ (id)implForContact:(id)arg1;
+ (id)publicFingerprintForContact:(id)arg1;
+ (id)publicFingerprintForContacts:(id)arg1 scope:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasContactIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1 scope:(id)arg2;
- (id)initWithImpl:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

