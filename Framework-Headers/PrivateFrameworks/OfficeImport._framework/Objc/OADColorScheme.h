//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject <NSCopying>
{
    NSString *mName;
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=mName;

- (void).cxx_destruct;
- (void)addColor:(id)arg1 index:(int)arg2;
- (unsigned long long)colorCount;
- (id)colorForIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)validateColorScheme;

@end

