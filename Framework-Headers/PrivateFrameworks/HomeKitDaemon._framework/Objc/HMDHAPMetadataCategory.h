//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : HMFObject
{
    NSNumber *_identifier;
    NSString *_uuidStr;
    NSString *_name;
    NSString *_catDescription;
}

@property (strong, nonatomic) NSString *catDescription; // @synthesize catDescription=_catDescription;
@property (strong, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4;

@end

