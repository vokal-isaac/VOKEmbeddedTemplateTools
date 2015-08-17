//
//  VOKZZArchiveTemplateRepository.h
//  VOKEmbeddedTemplateTools
//
//  Created by Isaac Greenspan on 8/16/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import "GRMustacheTemplateRepository.h"

@class ZZArchive;

/**
 *  A GRMustacheTemplateRepository subclass that gets its templates from inside a ZZArchive object.
 */
@interface VOKZZArchiveTemplateRepository : GRMustacheTemplateRepository

/**
 *  Returns a VOKZZArchiveTemplateRepository that loads Mustache template strings from files of extension .mustache,
 *  encoded in UTF8, stored in the zip archive represented by the provided ZZArchive object.
 *
 *  @param archive A ZZArchive object representing the zip archive from which to load templates.
 *
 *  @return The GRMustacheTemplateRepository.
 */
+ (instancetype)templateRepositoryWithArchive:(ZZArchive *)archive;

/**
 *  Initialize a VOKZZArchiveTemplateRepository that loads Mustache template strings from files of extension .mustache,
 *  encoded in UTF8, stored in the zip archive represented by the provided ZZArchive object.
 *
 *  @param archive A ZZArchive object representing the zip archive from which to load templates.
 *
 *  @return The GRMustacheTemplateRepository.
 */
- (instancetype)initWithArchive:(ZZArchive *)archive;

@end
