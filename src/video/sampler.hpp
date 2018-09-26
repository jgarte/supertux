//  SuperTux
//  Copyright (C) 2018 Ingo Ruhnke <grumbel@gmail.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_SUPERTUX_VIDEO_SAMPLER_HPP
#define HEADER_SUPERTUX_VIDEO_SAMPLER_HPP

#include "video/gl.hpp"

class Sampler
{
public:
  Sampler();
  Sampler(GLenum filter, GLenum wrap_s, GLenum wrap_t);
  Sampler(const Sampler&) = default;

  Sampler& operator=(const Sampler&) = default;

  GLenum get_filter() const { return m_filter; }
  GLenum get_wrap_s() const { return m_wrap_s; }
  GLenum get_wrap_t() const { return m_wrap_t; }

private:
  GLenum m_filter;
  GLenum m_wrap_s;
  GLenum m_wrap_t;
};

#endif

/* EOF */
