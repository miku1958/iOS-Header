//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSource.h>

@class NUComposition, NUCompositionSourceDefinition;

@interface NUCompositionSource : NUSource
{
    NUCompositionSourceDefinition *_sourceDefinition;
}

@property (readonly, nonatomic) NUComposition *composition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)sourceDefinition:(out id *)arg1;

@end
