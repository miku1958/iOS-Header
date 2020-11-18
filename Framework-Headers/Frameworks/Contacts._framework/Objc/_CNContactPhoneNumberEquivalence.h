//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/_CNContactHandleStringEquivalenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy>
{
    NSString *_rawString;
    struct {
        char *_field1;
        char *_field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
    } *_decomposedRepresentation;
    char *_decomposedNumberDigits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)indexKeyForString:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPhoneNumberString:(id)arg1;
- (BOOL)isEquivalentToString:(id)arg1 strict:(BOOL *)arg2;
- (BOOL)isPhoneNumberEquivalent:(id)arg1 strict:(BOOL *)arg2;
- (BOOL)isRawStringEquivalent:(id)arg1;
- (BOOL)preparePhoneNumberRepresentation;

@end
