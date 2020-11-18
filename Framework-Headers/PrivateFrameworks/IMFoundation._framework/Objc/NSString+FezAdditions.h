//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)copyStringGUID;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)generatedRoomNameForGroupChat;
+ (id)randomString;
+ (id)stringGUID;
+ (id)stringGUIDForObject:(id)arg1;
- (long long)_FZBestGuessFZIDType;
- (id)_FZIDFromEmail;
- (id)_FZIDFromPhoneNumber;
- (long long)_FZIDType;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_URIFromBusinessID;
- (id)_URIFromCanonicalizedBusinessID;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedEmail;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromDSID;
- (id)_URIFromEmail;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromPhoneNumber;
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (id)__stringByStrippingControlCharacters;
- (BOOL)_appearsToBeBusinessID;
- (BOOL)_appearsToBeDSID;
- (BOOL)_appearsToBeEmail;
- (BOOL)_appearsToBePhoneNumber;
- (id)_bestGuessURI;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_md5Hash;
- (id)_stripFZIDPrefix;
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;
- (unsigned int)hexValue;
- (BOOL)isDirectory;
- (BOOL)isEqualToIgnoringCase:(id)arg1;
- (long long)localizedCompareToString:(id)arg1;
- (id)pathStringForDisplay;
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringByAddingURLEscapes;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)stringByRemovingURLEscapes;
- (id)stringByRemovingWhitespace;
- (id)stringByResolvingAndStandardizingPath;
- (id)stringWithLTREmbedding;
- (id)trimmedString;
- (id)uniqueSavePath;
- (unsigned int)unsignedIntValue;
- (id)urlFromString;
@end

