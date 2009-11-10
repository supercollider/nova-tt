//  spin_lock class
//  Copyright (C) 2008 Tim Blechmann
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; see the file COPYING.  If not, write to
//  the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
//  Boston, MA 02111-1307, USA.

/** \file spin_lock.hpp */

#ifndef NOVA_TT_SPIN_LOCK_HPP
#define NOVA_TT_SPIN_LOCK_HPP

#if defined(__APPLE__)
#include "spin_lock_apple.hpp"
#else
#include "spin_lock_pthread.hpp"
#endif

#endif /* NOVA_TT_SPIN_LOCK_HPP */
