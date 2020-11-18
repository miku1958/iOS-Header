//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest
{
    BOOL _overwriteExistingDestinations;
    NSURL *_sourceURL;
    NSMutableArray *_resizeDestinations;
}

@property (nonatomic) BOOL overwriteExistingDestinations; // @synthesize overwriteExistingDestinations=_overwriteExistingDestinations;
@property (strong, nonatomic) NSMutableArray *resizeDestinations; // @synthesize resizeDestinations=_resizeDestinations;
@property (copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;
- (Class)operationClass;

@end

