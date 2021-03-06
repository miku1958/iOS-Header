//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest
{
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    long long _destinationFormat;
    double _destinationCompressionQuality;
}

@property (nonatomic) double destinationCompressionQuality; // @synthesize destinationCompressionQuality=_destinationCompressionQuality;
@property (nonatomic) long long destinationFormat; // @synthesize destinationFormat=_destinationFormat;
@property (copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3;
- (Class)operationClass;
- (long long)operationPriority;

@end

