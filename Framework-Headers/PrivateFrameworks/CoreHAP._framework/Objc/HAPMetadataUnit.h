//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject
{
    NSString *_name;
    NSString *_unitDescription;
}

@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *unitDescription; // @synthesize unitDescription=_unitDescription;

+ (id)init:(id)arg1 withDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithName:(id)arg1 description:(id)arg2;

@end

