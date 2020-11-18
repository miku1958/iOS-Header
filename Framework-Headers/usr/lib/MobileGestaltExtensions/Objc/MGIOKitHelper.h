//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGIOKitHelper : NSObject
{
    unsigned int devIterator;
}

- (struct __CFBoolean *)copyBooleanFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData *)copyDataFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData *)copyDataFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void *)copyDeviceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (unsigned int)copyDeviceTreeStructureNext:(id)arg1 withFirstChar:(BOOL)arg2;
- (struct __CFNumber *)copyNumberFromData:(struct __CFData *)arg1;
- (struct __CFNumber *)copyNumberFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void *)copyPropertyFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void *)copyServiceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFString *)copyStringFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (BOOL)createServicesIteratorByNameMatch:(const char *)arg1;
- (BOOL)createTreeIterator:(const char *)arg1;
- (void)dealloc;
- (void)deleteIterator;
- (id)init;

@end

