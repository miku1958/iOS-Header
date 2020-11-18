//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionSPI-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLDevice, OS_dispatch_data;

@interface _MTLFunction : NSObject <MTLFunctionSPI>
{
    id<MTLDevice> _device;
    unsigned long long _functionType;
    NSString *_name;
    struct MTLLibraryData *_libraryData;
    id _vendorPrivate;
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    NSObject<OS_dispatch_data> *_constantData;
    NSString *_label;
}

@property (readonly) unsigned long long bitCodeOffset; // @dynamic bitCodeOffset;
@property (readonly) unsigned char bitcodeType; // @dynamic bitcodeType;
@property (readonly) NSObject<OS_dispatch_data> *constantData; // @dynamic constantData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (copy) NSString *filePath; // @dynamic filePath;
@property NSArray *functionConstants; // @dynamic functionConstants;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs; // @dynamic functionInputs;
@property (readonly) unsigned long long functionType; // @synthesize functionType=_functionType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property long long lineNumber; // @dynamic lineNumber;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) BOOL needsFunctionConstantValues; // @dynamic needsFunctionConstantValues;
@property (readonly) long long patchControlPointCount; // @dynamic patchControlPointCount;
@property (readonly) unsigned long long patchType; // @dynamic patchType;
@property (readonly) NSArray *stageInputAttributes; // @dynamic stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly) id vendorPrivate; // @synthesize vendorPrivate=_vendorPrivate;
@property NSArray *vertexAttributes; // @dynamic vertexAttributes;

- (unsigned long long)bitCodeFileSize;
- (const CDStruct_41a22ec7 *)bitCodeHash;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 device:(id)arg4;
- (void)newSpecializedFunctionWithConstants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newSpecializedFunctionWithConstants:(id)arg1 error:(id *)arg2;
- (void)setVendorPrivate:(id)arg1;

@end

