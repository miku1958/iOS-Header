//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAssistantINPersonConverter : NSObject
{
}

+ (id)INPersonForCNContact:(id)arg1;
+ (id)INPersonForCNContact:(id)arg1 withDisplayName:(id)arg2 includePersonHandle:(BOOL)arg3;
+ (id)INPersonForIMHandle:(id)arg1 withOriginalINPerson:(id)arg2;
+ (id)INPersonForSPIHandle:(id)arg1;
+ (id)INPersonToDictionary:(id)arg1;
+ (id)INPersonsForAllIMHandles:(id)arg1 withOriginalINPerson:(id)arg2;
+ (id)INPersonsForSPIHandles:(id)arg1;
+ (id)INPersonsToDictionary:(id)arg1;

@end

