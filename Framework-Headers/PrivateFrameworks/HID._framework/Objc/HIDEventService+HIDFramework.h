//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOKit/HIDEventService.h>

@interface HIDEventService (HIDFramework)

@property (readonly) unsigned long long serviceID;

- (BOOL)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (void)dispatchEvent:(id)arg1;
- (id)eventMatching:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
@end
