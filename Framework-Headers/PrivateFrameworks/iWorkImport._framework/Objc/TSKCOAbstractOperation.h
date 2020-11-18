//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKCOOperation-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    BOOL _noop;
}

@property (readonly, nonatomic) BOOL isNoop; // @synthesize isNoop=_noop;

+ (id)_classRegistry;
+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
+ (void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2;
- (id)description;
- (id)initWithNoop:(BOOL)arg1;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)toString;

@end
