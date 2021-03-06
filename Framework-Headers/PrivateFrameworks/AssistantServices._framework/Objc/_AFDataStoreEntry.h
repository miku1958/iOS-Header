//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _AFDataStoreEntry : NSObject
{
    long long _type;
    id _value;
}

@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;
- (id)_valuePropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)propertyListRepresentation;

@end

