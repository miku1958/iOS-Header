//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSUUUIDPath;

@interface TSKCOAbstractOperation : NSObject
{
    vector_4dc5f307 _address;
    BOOL _noop;
}

@property (readonly, nonatomic) const vector_4dc5f307 *UUIDAddress;
@property (readonly, nonatomic) TSUUUIDPath *UUIDPath;
@property (readonly, nonatomic) BOOL isNoop; // @synthesize isNoop=_noop;
@property (readonly, nonatomic) NSString *toString;

+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 noop:(BOOL)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (BOOL)isEqual:(id)arg1;
- (shared_ptr_f167ad79)newTransformableOperation;
- (void)populateAddressFromIdentifier:(const RepeatedField_88f7bd5c *)arg1;
- (void)populateRangeVector:(vector_b5e32e34 *)arg1 fromRangeList:(const RepeatedField_b20a0771 *)arg2;
- (void)saveAddress:(const vector_4dc5f307 *)arg1 identifier:(RepeatedField_88f7bd5c *)arg2;
- (void)saveRangeVector:(vector_b5e32e34 *)arg1 rangeList:(RepeatedField_b20a0771 *)arg2;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;

@end

