//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFFrameworkAssembly-Protocol.h>

@class NSArray, NSString;

@interface NUExtensionFrameworkAssembly : NSObject <NFFrameworkAssembly>
{
    NSArray *_assemblies;
}

@property (readonly, copy, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExtensionContextProvider:(id)arg1;

@end
