//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC8FMClient18SearchFilterDevice : NSObject
{
    MISSING_TYPE *ownerName;
    MISSING_TYPE *ownerDsid;
    MISSING_TYPE *deviceName;
    MISSING_TYPE *deviceClass;
    MISSING_TYPE *productName;
    MISSING_TYPE *productType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerName:(id)arg1 ownerDsid:(id)arg2 deviceName:(id)arg3 deviceClass:(id)arg4 productName:(id)arg5 productType:(id)arg6;

@end

