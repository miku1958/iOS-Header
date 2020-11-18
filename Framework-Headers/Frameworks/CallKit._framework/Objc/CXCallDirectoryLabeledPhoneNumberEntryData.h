//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallDirectoryEntryData-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>
{
    NSData *_phoneNumberData;
    NSData *_labelData;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *labelData; // @synthesize labelData=_labelData;
@property (strong, nonatomic) NSData *phoneNumberData; // @synthesize phoneNumberData=_phoneNumberData;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)phoneNumberAtIndex:(unsigned long long)arg1;
- (const char *)utf8LabelAtIndex:(unsigned long long)arg1 length:(out unsigned short *)arg2;

@end

