//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKAssertID-Protocol.h>

@class NSString;

@interface VTKAssertID : NSObject <VTKAssertID>
{
    NSString *_vtkAssertName;
    unsigned long long _vtkIDDecorationsMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *vtkAssertName; // @synthesize vtkAssertName=_vtkAssertName;
@property (readonly, nonatomic) unsigned long long vtkIDDecorationsMask; // @synthesize vtkIDDecorationsMask=_vtkIDDecorationsMask;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 decorationMask:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

