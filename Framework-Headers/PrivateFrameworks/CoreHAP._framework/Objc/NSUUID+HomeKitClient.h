//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setIdentifierSalt:(id)arg1 assistantIdentifierSalt:(id)arg2;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
- (id)convertToData;
@end

