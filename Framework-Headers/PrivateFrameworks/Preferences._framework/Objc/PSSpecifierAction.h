//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@interface PSSpecifierAction : NSObject <NSCopying>
{
    CDUnknownBlockType _getter;
    CDUnknownBlockType _setter;
}

@property (copy, nonatomic) CDUnknownBlockType getter; // @synthesize getter=_getter;
@property (copy, nonatomic) CDUnknownBlockType setter; // @synthesize setter=_setter;

+ (id)actionWithBoolDetailClass:(Class)arg1;
+ (id)actionWithGetter:(CDUnknownBlockType)arg1 setter:(CDUnknownBlockType)arg2;
+ (id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
