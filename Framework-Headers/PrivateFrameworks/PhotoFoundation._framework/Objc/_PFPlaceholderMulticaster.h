//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFMulticaster.h>

@interface _PFPlaceholderMulticaster : PFMulticaster
{
}

+ (void)convertToConcreteMulticaster:(id)arg1 forReceiver:(id)arg2;
+ (Class)placeholderSubclassOfClass:(Class)arg1 named:(id)arg2;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)tryConvertToConcreteMulticaster:(id)arg1;
- (void)__ignore;
- (void)addReceiver:(id)arg1;
- (void)addWeakReceiver:(id)arg1;

@end

