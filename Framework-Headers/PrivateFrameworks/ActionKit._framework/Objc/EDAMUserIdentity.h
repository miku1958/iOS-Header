//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMUserIdentity : FATObject
{
    NSNumber *_type;
    NSString *_stringIdentifier;
    NSNumber *_longIdentifier;
}

@property (strong, nonatomic) NSNumber *longIdentifier; // @synthesize longIdentifier=_longIdentifier;
@property (strong, nonatomic) NSString *stringIdentifier; // @synthesize stringIdentifier=_stringIdentifier;
@property (strong, nonatomic) NSNumber *type; // @synthesize type=_type;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
