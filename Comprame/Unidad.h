//
//  Unidad.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Unidad : NSManagedObject

@property (nonatomic, retain) NSNumber * id_unid;
@property (nonatomic, retain) NSString * nombre_unid;

@end
