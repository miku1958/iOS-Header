//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSArray;

@protocol BSProtobufSchemaBuilder <NSObject>
- (void)addField:(const char *)arg1;
- (void)addField:(const char *)arg1 allowedClasses:(NSArray *)arg2;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(NSArray *)arg2;
@end

