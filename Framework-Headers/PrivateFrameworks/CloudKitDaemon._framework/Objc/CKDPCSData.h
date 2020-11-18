//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface CKDPCSData : NSObject <NSSecureCoding>
{
    struct _OpaquePCSShareProtection *_pcs;
    NSString *_etag;
    NSData *_pcsData;
}

@property (copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (readonly, nonatomic) id<NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection *pcs; // @synthesize pcs=_pcs;
@property (copy, nonatomic) NSData *pcsData; // @synthesize pcsData=_pcsData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (BOOL)decryptPCSDataWithManager:(id)arg1 error:(id *)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1;

@end

