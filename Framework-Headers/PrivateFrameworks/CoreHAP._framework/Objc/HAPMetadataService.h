//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSSet, NSString;

@interface HAPMetadataService : HMFObject
{
    BOOL _allowAssociatedService;
    NSString *_name;
    NSString *_svcDescription;
    NSString *_uuidStr;
    NSString *_btleuuidStr;
    NSNumber *_properties;
    NSArray *_linkedServices;
    NSSet *_mandatoryCharacteristics;
    NSSet *_optionalCharacteristics;
}

@property (nonatomic) BOOL allowAssociatedService; // @synthesize allowAssociatedService=_allowAssociatedService;
@property (strong, nonatomic) NSString *btleuuidStr; // @synthesize btleuuidStr=_btleuuidStr;
@property (strong, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property (strong, nonatomic) NSSet *mandatoryCharacteristics; // @synthesize mandatoryCharacteristics=_mandatoryCharacteristics;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSSet *optionalCharacteristics; // @synthesize optionalCharacteristics=_optionalCharacteristics;
@property (strong, nonatomic) NSNumber *properties; // @synthesize properties=_properties;
@property (strong, nonatomic) NSString *svcDescription; // @synthesize svcDescription=_svcDescription;
@property (strong, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (id)generateDictionary:(id)arg1 metadata:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryChrTypes:(id)arg4 properties:(id)arg5 linkedServices:(id)arg6;

@end

