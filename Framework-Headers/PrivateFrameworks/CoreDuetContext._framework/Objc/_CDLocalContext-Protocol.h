//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDContext-Protocol.h>

@class NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContext <_CDContext>
- (BOOL)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (BOOL)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forKeyedSubscript:(_CDContextualKeyPath *)arg2;
@end
