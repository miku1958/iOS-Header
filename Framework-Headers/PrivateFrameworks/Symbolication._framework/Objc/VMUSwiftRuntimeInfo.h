//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VMUMutableClassInfo;

@interface VMUSwiftRuntimeInfo : NSObject
{
    unsigned long long _nativeWeakReferenceMarkerMask;
    unsigned long long _nativeWeakReferenceMarkerValue;
    unsigned long long _nativeWeakReferencePointerMask;
    BOOL _nativeWeakReferencePointerIsSideTable;
    unsigned long long _refcountIsSideTableMarkerMask;
    unsigned long long _refcountIsSideTableMarkerValue;
    unsigned long long _sideTablePointerMask;
    unsigned char _sideTablePointerRightShift;
    unsigned char _sideTablePointerLeftShift;
    VMUMutableClassInfo *_sideTableLayout;
    VMUMutableClassInfo *_unownedExtraDataLayout;
    BOOL _runtimeHasStableABI;
}

@property (readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerMask; // @synthesize nativeWeakReferenceMarkerMask=_nativeWeakReferenceMarkerMask;
@property (readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerValue; // @synthesize nativeWeakReferenceMarkerValue=_nativeWeakReferenceMarkerValue;
@property (readonly, nonatomic) BOOL nativeWeakReferencePointerIsSideTable; // @synthesize nativeWeakReferencePointerIsSideTable=_nativeWeakReferencePointerIsSideTable;
@property (readonly, nonatomic) unsigned long long nativeWeakReferencePointerMask; // @synthesize nativeWeakReferencePointerMask=_nativeWeakReferencePointerMask;
@property (readonly, nonatomic) unsigned long long refcountIsSideTableMarkerMask; // @synthesize refcountIsSideTableMarkerMask=_refcountIsSideTableMarkerMask;
@property (readonly, nonatomic) unsigned long long refcountIsSideTableMarkerValue; // @synthesize refcountIsSideTableMarkerValue=_refcountIsSideTableMarkerValue;
@property (readonly, nonatomic) BOOL runtimeHasStableABI; // @synthesize runtimeHasStableABI=_runtimeHasStableABI;
@property (readonly, nonatomic) VMUMutableClassInfo *sideTableLayout; // @synthesize sideTableLayout=_sideTableLayout;
@property (readonly, nonatomic) unsigned char sideTablePointerLeftShift; // @synthesize sideTablePointerLeftShift=_sideTablePointerLeftShift;
@property (readonly, nonatomic) unsigned long long sideTablePointerMask; // @synthesize sideTablePointerMask=_sideTablePointerMask;
@property (readonly, nonatomic) unsigned char sideTablePointerRightShift; // @synthesize sideTablePointerRightShift=_sideTablePointerRightShift;
@property (readonly, nonatomic) VMUMutableClassInfo *unownedExtraDataLayout; // @synthesize unownedExtraDataLayout=_unownedExtraDataLayout;

- (void).cxx_destruct;
- (id)initWithSwiftCore:(struct _CSTypeRef)arg1 memoryReader:(CDUnknownBlockType)arg2;

@end
