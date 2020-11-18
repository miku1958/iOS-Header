//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter
{
    void *_person;
    struct __CFArray *_properties;
}

+ (struct __CFArray *)supportedProperties;
- (void)dealloc;
- (struct __CFArray *)foundProperties;
- (id)fullName;
- (id)imageData;
- (id)initWithPerson:(void *)arg1;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (void *)valueForProperty:(unsigned int)arg1;

@end

