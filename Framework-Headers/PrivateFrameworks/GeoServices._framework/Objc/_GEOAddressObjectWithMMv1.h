//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOAddressObjectProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOAddressObjectWithMMv1 : NSObject <GEOAddressObjectProtocol>
{
    shared_ptr_3c8cf4aa _addrObjPtr;
    int *_knownAccuracy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKnownAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int knownAccuracy;
@property (readonly) Class superclass;

+ (id)libraryVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)address;
- (id)addressDictionary;
- (id)cityDisplayNameWithFallback:(BOOL)arg1;
- (void)dealloc;
- (id)fullAddressWithMultiline:(BOOL)arg1;
- (shared_ptr_3c8cf4aa)getConvertedAO;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)shortAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (id)weatherDisplayName;

@end

