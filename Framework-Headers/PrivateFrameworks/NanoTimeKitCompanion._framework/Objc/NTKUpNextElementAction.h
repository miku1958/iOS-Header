//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@protocol NTKUpNextElementActionDelegate;

@interface NTKUpNextElementAction : NSObject <NSCopying>
{
    id<NTKUpNextElementActionDelegate> _delegate;
}

@property (weak, nonatomic) id<NTKUpNextElementActionDelegate> delegate;

- (void).cxx_destruct;
- (void)_didFinish:(BOOL)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
