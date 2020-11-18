//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSString, NSURL;

@interface NUFileSourceDefinition : NUSingleSourceDefinition
{
    NSURL *_url;
    NSString *_uti;
}

@property (readonly) NSURL *url; // @synthesize url=_url;
@property (readonly) NSString *uti; // @synthesize uti=_uti;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;

@end

