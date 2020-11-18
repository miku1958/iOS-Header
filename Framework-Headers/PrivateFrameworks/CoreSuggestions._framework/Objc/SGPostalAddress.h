//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject
{
    NSString *_cachedAddress;
    struct _opaque_pthread_mutex_t _cachedAddressLock;
    NSString *_rawAddress;
    SGPostalAddressComponents *_components;
}

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) SGPostalAddressComponents *components; // @synthesize components=_components;
@property (readonly, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;

+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5;
+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPostalAddress:(id)arg1;

@end

